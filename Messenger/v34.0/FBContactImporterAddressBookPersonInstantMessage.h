/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:31 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBContactImporterAddressBookPersonProperty.h>

@class NSString;

@interface FBContactImporterAddressBookPersonInstantMessage : NSObject <FBContactImporterAddressBookPersonProperty> {

	NSString* _service;
	NSString* _userName;

}

@property (nonatomic,copy,readonly) NSString * service;               //@synthesize service=_service - In the implementation block
@property (nonatomic,copy,readonly) NSString * userName;              //@synthesize userName=_userName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)propertyFromABLabelRef:(CFStringRef)arg1 ABValueRef:(void*)arg2 ;
-(id)asStrings;
-(id)_initWithLabel:(id)arg1 serviceDict:(id)arg2 ;
-(NSString *)userName;
-(NSString *)description;
-(NSString *)service;
@end

