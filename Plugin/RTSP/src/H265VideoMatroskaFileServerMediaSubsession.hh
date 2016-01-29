/**********
This library is free software; you can redistribute it and/or modify it under
the terms of the GNU Lesser General Public License as published by the
Free Software Foundation; either version 2.1 of the License, or (at your
option) any later version. (See <http://www.gnu.org/copyleft/lesser.html>.)

This library is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
more details.

You should have received a copy of the GNU Lesser General Public License
along with this library; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
**********/
// "liveMedia"
// Copyright (c) 1996-2014 Live Networks, Inc.  All rights reserved.
// A 'ServerMediaSubsession' object that creates new, unicast, "RTPSink"s
// on demand, from an H265 video track within a Matroska file.
// C++ header

#ifndef _H265_VIDEO_MATROSKA_FILE_SERVER_MEDIA_SUBSESSION_HH
#define _H265_VIDEO_MATROSKA_FILE_SERVER_MEDIA_SUBSESSION_HH

#ifndef _H265_VIDEO_FILE_SERVER_MEDIA_SUBSESSION_HH
#include "H265VideoFileServerMediaSubsession.hh"
#endif
#ifndef _MATROSKA_FILE_SERVER_DEMUX_HH
#include "MatroskaFileServerDemux.hh"
#endif

class H265VideoMatroskaFileServerMediaSubsession: public H265VideoFileServerMediaSubsession {
public:
  static H265VideoMatroskaFileServerMediaSubsession*
  createNew(MatroskaFileServerDemux& demux, unsigned trackNumber);

private:
  H265VideoMatroskaFileServerMediaSubsession(MatroskaFileServerDemux& demux, unsigned trackNumber);
      // called only by createNew();
  virtual ~H265VideoMatroskaFileServerMediaSubsession();

private: // redefined virtual functions
  virtual float duration() const;
  virtual void seekStreamSource(FramedSource* inputSource, double& seekNPT, double streamDuration, u_int64_t& numBytes);
  virtual FramedSource* createNewStreamSource(unsigned clientSessionId,
                                              unsigned& estBitrate);

private:
  MatroskaFileServerDemux& fOurDemux;
  unsigned fTrackNumber;

  // We store one VPS, one SPS, and one PPS, for use in our input 'framer's:
  unsigned fVPSSize;
  u_int8_t* fVPS;
  unsigned fSPSSize;
  u_int8_t* fSPS;
  unsigned fPPSSize;
  u_int8_t* fPPS;
};

#endif
