/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:43 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNPickableValue.h>

@class NSString, UIImage;

@interface TFNTwitterStreamFilter : NSObject <TFNPickableValue> {

	NSString* _valueName;
	NSString* _scribeParameter;
	long long _activityType;

}

@property (nonatomic,readonly) NSString * scribeParameter;               //@synthesize scribeParameter=_scribeParameter - In the implementation block
@property (nonatomic,readonly) long long activityType;                   //@synthesize activityType=_activityType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * valueName;                //@synthesize valueName=_valueName - In the implementation block
@property (nonatomic,readonly) UIImage * valueIcon; 
@property (nonatomic,copy,readonly) NSString * valueDetail; 
+(id)filterWithActivityType:(long long)arg1 ;
-(NSString *)valueName;
-(NSString *)scribeParameter;
-(long long)activityType;
@end
