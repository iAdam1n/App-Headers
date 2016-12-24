/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBStreamingEventEntityDownloader.h>

@class NSString, FBUserSession;

@interface FBStreamingEventTipEntityDownloader : NSObject <FBStreamingEventEntityDownloader> {

	NSString* _videoID;
	FBUserSession* _session;
	NSString* _cursor;
	unsigned long long _numTipsPerPage;

}

@property (nonatomic,copy) NSString * videoID;                                        //@synthesize videoID=_videoID - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                 //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSString * cursor;                                         //@synthesize cursor=_cursor - In the implementation block
@property (assign,nonatomic) unsigned long long numTipsPerPage;                       //@synthesize numTipsPerPage=_numTipsPerPage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long stableBufferThreshold; 
@property (nonatomic,readonly) double minimumPeriod; 
-(id)graphQLQuery;
-(id)initWithSession:(id)arg1 videoID:(id)arg2 itemsPerPage:(unsigned long long)arg3 ;
-(double)minimumPeriod;
-(unsigned long long)stableBufferThreshold;
-(id)eventsFromResponse:(id)arg1 finalStatus:(id)arg2 ;
-(unsigned long long)numTipsPerPage;
-(void)setNumTipsPerPage:(unsigned long long)arg1 ;
-(id)init;
-(NSString *)description;
-(unsigned long long)type;
-(NSString *)cursor;
-(void)setCursor:(NSString *)arg1 ;
-(void)setSession:(FBUserSession *)arg1 ;
-(FBUserSession *)session;
-(NSString *)videoID;
-(void)setVideoID:(NSString *)arg1 ;
@end
