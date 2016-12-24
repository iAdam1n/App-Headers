/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBQuicksilverPlayerInfo, NSString, NSArray;

@interface FBInstantGameLeaderboardData : FBValueObject <NSCopying> {

	BOOL _hasGamePlayedInThread;
	FBQuicksilverPlayerInfo* _viewerInfo;
	NSString* _groupThreadName;
	unsigned long long _viewerRank;
	NSArray* _playerList;

}

@property (nonatomic,copy,readonly) FBQuicksilverPlayerInfo * viewerInfo;              //@synthesize viewerInfo=_viewerInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasGamePlayedInThread;                             //@synthesize hasGamePlayedInThread=_hasGamePlayedInThread - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupThreadName;                        //@synthesize groupThreadName=_groupThreadName - In the implementation block
@property (nonatomic,readonly) unsigned long long viewerRank;                          //@synthesize viewerRank=_viewerRank - In the implementation block
@property (nonatomic,copy,readonly) NSArray * playerList;                              //@synthesize playerList=_playerList - In the implementation block
-(BOOL)hasGamePlayedInThread;
-(NSString *)groupThreadName;
-(unsigned long long)viewerRank;
-(id)initWithViewerInfo:(id)arg1 hasGamePlayedInThread:(BOOL)arg2 groupThreadName:(id)arg3 viewerRank:(unsigned long long)arg4 playerList:(id)arg5 ;
-(NSArray *)playerList;
-(FBQuicksilverPlayerInfo *)viewerInfo;
@end
