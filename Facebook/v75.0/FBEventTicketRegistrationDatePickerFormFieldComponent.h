/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@protocol FBEventTicketingDatePickerFormFieldFragment, FBEventTicketRegistrationDataUpdateListener;
@class NSDate;

@interface FBEventTicketRegistrationDatePickerFormFieldComponent : CKCompositeComponent {

	id<FBEventTicketingDatePickerFormFieldFragment> _model;
	id<FBEventTicketRegistrationDataUpdateListener> _dataListener;
	NSDate* _currentDate;

}
+(id)newWithScreenElement:(id)arg1 currentValue:(id)arg2 dataListener:(id)arg3 ;
-(void)datePickerComponent:(id)arg1 didSelectDate:(id)arg2 ;
-(void)sendCurrentState;
@end
