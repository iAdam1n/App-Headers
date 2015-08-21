/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:11 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBPopoverController.h>
#import <Messenger/FBAccessibilityInvalidationEventsListener.h>

@class FBActionSheetContentViewController, FBActionSheetButtonMetrics, NSArray, NSString;

@interface FBPopoverActionSheet : FBPopoverController <FBAccessibilityInvalidationEventsListener> {

	FBActionSheetContentViewController* _contentViewController;
	FBActionSheetButtonMetrics* _metrics;

}

@property (nonatomic,copy) NSArray * buttonItems; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didReceiveAccessibilityInvalidation;
-(id)initWithBackgroundViewClass:(Class)arg1 ;
-(void)setButtonItems:(id)arg1 animation:(unsigned long long)arg2 ;
-(id)initWithBackgroundViewClass:(Class)arg1 metrics:(id)arg2 ;
-(id)init;
-(NSArray *)buttonItems;
-(void)setButtonItems:(NSArray *)arg1 ;
@end

