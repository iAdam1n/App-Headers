/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:26 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/NTNativeTemplateComponent.h>
#import <Facebook/NTValueTemplate.h>
#import <Facebook/NTHasComponentAttributes.h>
#import <Facebook/NTHasViewAttributes.h>

@protocol NTNativeTemplateModel;
@class NSDictionary, NTNativeTemplateBaseContext, CKComponent, NSObject, NSString;

@interface NTDateTimeInputComponent : NTNativeTemplateComponent <NTValueTemplate, NTHasComponentAttributes, NTHasViewAttributes> {

	NSDictionary* _genericHelpers;
	NTNativeTemplateBaseContext* _context;
	CKComponent* _dateTimeInputComponent;
	NSObject*<NTNativeTemplateModel> _model;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithModel:(id)arg1 context:(id)arg2 ;
-(id)keyValuePair;
@end
