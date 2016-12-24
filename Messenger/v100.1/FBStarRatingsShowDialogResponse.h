/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:27 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString, FBStarRatingsDialogMetadata;

@interface FBStarRatingsShowDialogResponse : NSObject <NSCoding, NSCopying> {

	BOOL _shouldShow;
	unsigned long long _mode;
	NSDate* _showDialogTime;
	NSDate* _nextPingTime;
	NSString* _targetPurpose;
	FBStarRatingsDialogMetadata* _dialogMetadata;

}

@property (assign,nonatomic) BOOL shouldShow;                                         //@synthesize shouldShow=_shouldShow - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                 //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) NSDate * showDialogTime;                                 //@synthesize showDialogTime=_showDialogTime - In the implementation block
@property (nonatomic,retain) NSDate * nextPingTime;                                   //@synthesize nextPingTime=_nextPingTime - In the implementation block
@property (nonatomic,copy) NSString * targetPurpose;                                  //@synthesize targetPurpose=_targetPurpose - In the implementation block
@property (nonatomic,copy) FBStarRatingsDialogMetadata * dialogMetadata;              //@synthesize dialogMetadata=_dialogMetadata - In the implementation block
+(id)defaultAppStoreDialogMetadataConfig;
+(id)responseWithServerResponse:(id)arg1 delegate:(id)arg2 ;
+(id)responseForTesting;
-(NSString *)targetPurpose;
-(FBStarRatingsDialogMetadata *)dialogMetadata;
-(NSDate *)nextPingTime;
-(NSDate *)showDialogTime;
-(void)setTargetPurpose:(NSString *)arg1 ;
-(void)setDialogMetadata:(FBStarRatingsDialogMetadata *)arg1 ;
-(void)setNextPingTime:(NSDate *)arg1 ;
-(void)setShowDialogTime:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(void)setShouldShow:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)shouldShow;
@end
