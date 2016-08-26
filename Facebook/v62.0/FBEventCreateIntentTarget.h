/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:50 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBIntentTarget.h>

@class NSArray, NSString, NSDate;

@interface FBEventCreateIntentTarget : FBIntentTarget {

	long long _surface;
	NSArray* _recipientFBIDs;
	NSString* _title;
	NSString* _themeID;
	NSString* _themeURI;
	NSDate* _startTime;

}

@property (nonatomic,readonly) long long surface;                          //@synthesize surface=_surface - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recipientFBIDs;              //@synthesize recipientFBIDs=_recipientFBIDs - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * themeID;                    //@synthesize themeID=_themeID - In the implementation block
@property (nonatomic,copy,readonly) NSString * themeURI;                   //@synthesize themeURI=_themeURI - In the implementation block
@property (nonatomic,copy,readonly) NSDate * startTime;                    //@synthesize startTime=_startTime - In the implementation block
+(id)eventCreateTargetWithSurface:(long long)arg1 recipientFBIDs:(id)arg2 title:(id)arg3 themeID:(id)arg4 themeURI:(id)arg5 startTime:(id)arg6 ;
-(id)fallbackURLs;
-(NSString *)themeID;
-(NSString *)themeURI;
-(NSArray *)recipientFBIDs;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)title;
-(NSDate *)startTime;
-(long long)surface;
@end
