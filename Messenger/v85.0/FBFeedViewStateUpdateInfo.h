/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:22 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBJSONStringifiable.h>

@class FBFeedViewStateInfo, NSArray, NSString;

@interface FBFeedViewStateUpdateInfo : NSObject <FBJSONStringifiable> {

	FBFeedViewStateInfo* _beforeUpdateInfo;
	FBFeedViewStateInfo* _afterUpdateInfo;
	double _screenHeight;
	NSArray* _deletes;
	NSArray* _inserts;
	NSArray* _reloads;

}

@property (nonatomic,readonly) FBFeedViewStateInfo * beforeUpdateInfo;              //@synthesize beforeUpdateInfo=_beforeUpdateInfo - In the implementation block
@property (nonatomic,readonly) FBFeedViewStateInfo * afterUpdateInfo;               //@synthesize afterUpdateInfo=_afterUpdateInfo - In the implementation block
@property (nonatomic,readonly) double screenHeight;                                 //@synthesize screenHeight=_screenHeight - In the implementation block
@property (nonatomic,copy,readonly) NSArray * deletes;                              //@synthesize deletes=_deletes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * inserts;                              //@synthesize inserts=_inserts - In the implementation block
@property (nonatomic,copy,readonly) NSArray * reloads;                              //@synthesize reloads=_reloads - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryForJSONification;
-(id)initWithBeforeUpdateInfo:(id)arg1 afterUpdateInfo:(id)arg2 screenHeight:(double)arg3 deletes:(id)arg4 inserts:(id)arg5 reloads:(id)arg6 ;
-(FBFeedViewStateInfo *)beforeUpdateInfo;
-(FBFeedViewStateInfo *)afterUpdateInfo;
-(NSArray *)reloads;
-(NSArray *)inserts;
-(NSArray *)deletes;
-(double)screenHeight;
@end
