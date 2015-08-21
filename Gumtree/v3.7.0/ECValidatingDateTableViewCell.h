/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECValidatingTappableTextFieldTableViewCell.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class NSDate, UIPopoverController, NSString;

@interface ECValidatingDateTableViewCell : ECValidatingTappableTextFieldTableViewCell <UIPopoverControllerDelegate> {

	NSDate* _date;
	/*^block*/id _valueChangedHandler;
	UIPopoverController* _popover;

}

@property (nonatomic,retain) NSDate * date;                              //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) id valueChangedHandler;                       //@synthesize valueChangedHandler=_valueChangedHandler - In the implementation block
@property (nonatomic,retain) UIPopoverController * popover;              //@synthesize popover=_popover - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)useDefaultTapHandler;
-(id)valueChangedHandler;
-(void)setValueChangedHandler:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)isValid;
-(NSDate *)date;
-(id)stringFromDate:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(UIPopoverController *)popover;
-(void)setPopover:(UIPopoverController *)arg1 ;
-(void)updateDate;
@end

