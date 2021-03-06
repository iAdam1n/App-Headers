/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPageComponentFlowFormFieldUpdateListener.h>

@class NSMutableDictionary, FBPageComponentFlowFormFieldUpdateListenerAnnouncer, NSString;

@interface FBPageComponentFlowFormFieldsManager : NSObject <FBPageComponentFlowFormFieldUpdateListener> {

	NSMutableDictionary* _mutableFormFields;
	FBPageComponentFlowFormFieldUpdateListenerAnnouncer* _announcer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAnnouncer:(id)arg1 ;
-(id)formFields;
-(void)updateFormFieldsWithFormFieldType:(id)arg1 formFieldId:(id)arg2 fieldName:(id)arg3 value:(id)arg4 isValidValue:(BOOL)arg5 ;
-(id)mutableFormFields;
-(void)updateFormFieldsWithFormFieldObject:(id)arg1 ;
-(void)removeFormField:(id)arg1 ;
-(void)dealloc;
@end

