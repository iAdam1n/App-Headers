/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class NSString;

@interface Appirater : NSObject <UIAlertViewDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)appLaunched:(BOOL)arg1 ;
+(void)userDidSignificantEvent:(BOOL)arg1 ;
+(void)appLaunched;
+(void)appEnteredForeground:(BOOL)arg1 ;
-(BOOL)connectedToNetwork;
-(void)showRatingAlert;
-(BOOL)ratingConditionsHaveBeenMet;
-(void)incrementUseCount;
-(void)incrementSignificantEventCount;
-(void)incrementAndRate:(id)arg1 ;
-(void)incrementSignificantEventAndRate:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
@end

