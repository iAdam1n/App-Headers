/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@protocol WAForwardPickerViewControllerDelegate;
@class NSArray, NSString;

@interface WAForwardActivity : UIActivity {

	NSArray* _items;
	NSString* _customActivityTitle;
	NSArray* _selectedContacts;
	unsigned long long _status;
	long long _maximumItemCount;
	id<WAForwardPickerViewControllerDelegate> _pickerDelegate;

}

@property (nonatomic,copy) NSString * activityTitle; 
@property (nonatomic,readonly) NSArray * selectedContacts;                                                 //@synthesize selectedContacts=_selectedContacts - In the implementation block
@property (nonatomic,readonly) unsigned long long status;                                                  //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) long long maximumItemCount;                                                   //@synthesize maximumItemCount=_maximumItemCount - In the implementation block
@property (assign,nonatomic,__weak) id<WAForwardPickerViewControllerDelegate> pickerDelegate;              //@synthesize pickerDelegate=_pickerDelegate - In the implementation block
+(id)activityTitleForForwardingMessages:(id)arg1 ;
+(long long)activityCategory;
-(id)initWithMessages:(id)arg1 ;
-(id)activityType;
-(NSString *)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)activityViewController;
-(void)setActivityTitle:(NSString *)arg1 ;
-(id)activityImage;
-(id)activitySettingsImage;
-(unsigned long long)status;
-(NSArray *)selectedContacts;
-(id<WAForwardPickerViewControllerDelegate>)pickerDelegate;
-(void)setPickerDelegate:(id<WAForwardPickerViewControllerDelegate>)arg1 ;
-(long long)maximumItemCount;
-(void)setMaximumItemCount:(long long)arg1 ;
@end
