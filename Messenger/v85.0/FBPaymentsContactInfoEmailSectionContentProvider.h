/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:24 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsContactInfoSectionContentProviding.h>

@class NSString;

@interface FBPaymentsContactInfoEmailSectionContentProvider : NSObject <FBPaymentsContactInfoSectionContentProviding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)contactCellLabelTextForContactData:(id)arg1 ;
-(id)contactCellDetailLabelTextForContactData:(id)arg1 isPickerStyle:(BOOL)arg2 ;
-(long long)contactCellAccessoryTypeForContactData:(id)arg1 withCurrentSelectedData:(id)arg2 isPickerStyle:(BOOL)arg3 ;
-(id)sectionHeaderTitle;
-(id)addNewContactCellTitle;
-(BOOL)isContact:(id)arg1 havingContactID:(id)arg2 ;
@end
