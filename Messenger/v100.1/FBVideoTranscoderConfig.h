/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, FBVideoConfig, FBAudioConfig, FBSegmentConfig;

@interface FBVideoTranscoderConfig : NSObject <NSCopying> {

	NSDictionary* _config;
	FBVideoConfig* _videoConfig;
	FBAudioConfig* _audioConfig;
	FBSegmentConfig* _segmentConfig;

}

@property (nonatomic,copy,readonly) FBVideoConfig * videoConfig;                  //@synthesize videoConfig=_videoConfig - In the implementation block
@property (nonatomic,copy,readonly) FBAudioConfig * audioConfig;                  //@synthesize audioConfig=_audioConfig - In the implementation block
@property (nonatomic,copy,readonly) FBSegmentConfig * segmentConfig;              //@synthesize segmentConfig=_segmentConfig - In the implementation block
-(FBSegmentConfig *)segmentConfig;
-(FBVideoConfig *)videoConfig;
-(FBAudioConfig *)audioConfig;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
