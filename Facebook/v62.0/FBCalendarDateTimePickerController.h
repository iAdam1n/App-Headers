/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBCalendarCollectionViewDataSourceDelegate.h>
#import <Facebook/FBCalendarDateTimePickerViewDelegate.h>

@protocol FBCalendarDateTimePickerControllerDelegate;
@class FBCalendarDateTimePickerView, FBCalendarCollectionViewDataSource, NSCalendar, NSDate, FBEventAnalyticTracker, NSString, UIBarButtonItem, UIColor;

@interface FBCalendarDateTimePickerController : UIViewController <FBCalendarCollectionViewDataSourceDelegate, FBCalendarDateTimePickerViewDelegate> {

	FBCalendarDateTimePickerView* _dateTimeView;
	FBCalendarCollectionViewDataSource* _calendarDataSource;
	NSCalendar* _calendar;
	NSDate* _startDate;
	NSDate* _endDate;
	long long _activeField;
	FBEventAnalyticTracker* _tracker;
	BOOL _hideTimePicker;
	BOOL _hasEndTime;
	long long _previousStatusBarStyle;
	NSString* _navigationTitle;
	NSString* _actionButtonTitle;
	NSDate* _originalDate;
	UIBarButtonItem* _saveButton;
	UIColor* _backgroundColor;
	UIColor* _accentColor;
	id<FBCalendarDateTimePickerControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBCalendarDateTimePickerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 activeField:(long long)arg3 hideTimePicker:(BOOL)arg4 hasEndTime:(BOOL)arg5 navigationtitle:(id)arg6 actionButtonTitle:(id)arg7 preventUpdateForDate:(id)arg8 backgroundColor:(id)arg9 accentColor:(id)arg10 tracker:(id)arg11 ;
-(void)didSelectCancelButton:(id)arg1 ;
-(void)calendarDataSource:(id)arg1 didSelectCalendarDate:(id)arg2 atIndexPath:(id)arg3 ;
-(void)timePickerDidUpdateValue:(id)arg1 ;
-(void)didSelectAddEndDate:(id)arg1 ;
-(void)didSelectRemoveEndDate:(id)arg1 ;
-(void)didSelectEndDate:(id)arg1 ;
-(void)didSelectSaveButton:(id)arg1 ;
-(void)didSelectStartDate:(id)arg1 ;
-(void)configureViewForActiveField:(long long)arg1 animated:(BOOL)arg2 ;
-(void)configureViewAnimated:(BOOL)arg1 ;
-(void)_configureContextRow:(id)arg1 isActive:(BOOL)arg2 withText:(id)arg3 ;
-(void)_updateTitleTextAndButtonForStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)configureCalendar;
-(void)configureFieldsAnimated:(BOOL)arg1 ;
-(void)configureTimePickerAnimated:(BOOL)arg1 ;
-(id)_dateForActiveField:(long long)arg1 ;
-(void)_configureItemViewButtons;
-(id)_dateBySettingHour:(long long)arg1 minute:(long long)arg2 second:(long long)arg3 ofDate:(id)arg4 ;
-(void)_adjustDateRangeIfNecessaryWithPreviousDate:(id)arg1 ;
-(void)dateTimePickerView:(id)arg1 didUpdateToState:(long long)arg2 ;
-(void)setDelegate:(id<FBCalendarDateTimePickerControllerDelegate>)arg1 ;
-(id<FBCalendarDateTimePickerControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end
