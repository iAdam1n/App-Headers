/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:50 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/SPDYHeaderBlockFrame.h>

@interface SPDYHeadersFrame : SPDYHeaderBlockFrame {

	BOOL _last;
	unsigned _streamId;

}

@property (assign,nonatomic) unsigned streamId;              //@synthesize streamId=_streamId - In the implementation block
@property (assign,nonatomic) BOOL last;                      //@synthesize last=_last - In the implementation block
-(void)setStreamId:(unsigned)arg1 ;
-(unsigned)streamId;
-(void)setLast:(BOOL)arg1 ;
-(BOOL)last;
@end

