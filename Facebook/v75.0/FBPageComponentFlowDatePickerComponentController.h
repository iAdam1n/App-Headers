/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponentController.h>
#import <Facebook/FBComponentCollectionViewDataSourceEventListener.h>

@class FBPageComponentFlowComponentContext, NSString;

@interface FBPageComponentFlowDatePickerComponentController : CKComponentController <FBComponentCollectionViewDataSourceEventListener> {

	FBPageComponentFlowComponentContext* _context;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dataSourceWillBeginUpdates:(id)arg1 ;
-(void)dataSourceDidEndUpdates:(id)arg1 changeset:(Changeset*)arg2 userInfo:(id)arg3 ;
-(id)initWithComponent:(id)arg1 ;
-(void)datePickerComponent:(id)arg1 didSelectDate:(id)arg2 ;
-(void)_updateFormFieldManagerWithDate:(id)arg1 ;
-(void)dealloc;
@end
