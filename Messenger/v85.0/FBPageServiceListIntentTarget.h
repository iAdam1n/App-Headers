/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString;

@interface FBPageServiceListIntentTarget : FBIntentTarget {

	NSString* _FBID;
	NSString* _highlightItemFBID;
	NSString* _actionStyle;

}

@property (nonatomic,copy,readonly) NSString * FBID;                           //@synthesize FBID=_FBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * highlightItemFBID;              //@synthesize highlightItemFBID=_highlightItemFBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionStyle;                    //@synthesize actionStyle=_actionStyle - In the implementation block
+(id)pageServiceListTargetWithFBID:(id)arg1 highlightItemFBID:(id)arg2 actionStyle:(id)arg3 ;
-(id)fallbackURLs;
-(NSString *)FBID;
-(NSString *)actionStyle;
-(NSString *)highlightItemFBID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

