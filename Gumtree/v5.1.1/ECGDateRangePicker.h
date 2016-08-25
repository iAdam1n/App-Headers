/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECBaseRangePicker.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIDatePicker, NSDate, NSString;

@interface ECGDateRangePicker : ECBaseRangePicker <UIGestureRecognizerDelegate> {

	UIDatePicker* _datePicker;
	NSDate* _currentDate;
	/*^block*/id _valueChangedHandler;

}

@property (nonatomic,retain) NSDate * currentDate;                   //@synthesize currentDate=_currentDate - In the implementation block
@property (nonatomic,retain) UIDatePicker * datePicker;              //@synthesize datePicker=_datePicker - In the implementation block
@property (nonatomic,copy) id valueChangedHandler;                   //@synthesize valueChangedHandler=_valueChangedHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dateChange:(id)arg1 ;
-(id)fromValueString;
-(id)toValueString;
-(void)setupPicker;
-(void)setDatePicker:(UIDatePicker *)arg1 ;
-(NSDate *)currentDate;
-(void)updatePicker;
-(UIDatePicker *)datePicker;
-(id)valueChangedHandler;
-(void)setValueChangedHandler:(id)arg1 ;
-(void)setCurrentDate:(NSDate *)arg1 ;
@end

