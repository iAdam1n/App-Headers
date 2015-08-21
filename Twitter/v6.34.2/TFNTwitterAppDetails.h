/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:42 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

@class NSString;


@protocol TFNTwitterAppDetails <TFNDesignableModel>
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * numberOfRatings; 
@property (nonatomic,readonly) NSString * rating; 
@property (nonatomic,readonly) NSString * appCategory; 
@property (nonatomic,readonly) NSString * appIconURL; 
@property (nonatomic,readonly) BOOL isAppOpenable; 
@property (nonatomic,readonly) BOOL isAppInstallable; 
@required
+(id)ratingFormat;
-(NSString *)appIconURL;
-(BOOL)isAppInstallable;
-(BOOL)isAppOpenable;
-(NSString *)appCategory;
-(NSString *)title;
-(NSString *)numberOfRatings;
-(NSString *)rating;

@end

