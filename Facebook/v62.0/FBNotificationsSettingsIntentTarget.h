/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:50 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBIntentTarget.h>

@class NSArray, NSString;

@interface FBNotificationsSettingsIntentTarget : FBIntentTarget {

	NSArray* _optionSetIds;
	NSString* _title;

}

@property (nonatomic,copy,readonly) NSArray * optionSetIds;              //@synthesize optionSetIds=_optionSetIds - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
+(id)notficationsSettingsTargetWithOptionSetIds:(id)arg1 title:(id)arg2 ;
-(id)fallbackURLs;
-(NSArray *)optionSetIds;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)title;
@end
