/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:57 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Gumtree/Gumtree-Structs.h>
@class NSString, TAGPBEnumDescriptor;

@interface TAGPBExtensionDescriptor : NSObject {

	TAGPBExtensionDescription* description_;

}

@property (nonatomic,readonly) unsigned fieldNumber; 
@property (nonatomic,readonly) int type; 
@property (getter=isRepeated,nonatomic,readonly) BOOL repeated; 
@property (getter=isPackable,nonatomic,readonly) BOOL packable; 
@property (getter=isMessage,nonatomic,readonly) BOOL message; 
@property (nonatomic,readonly) Class msgClass; 
@property (nonatomic,readonly) NSString * singletonName; 
@property (nonatomic,retain,readonly) TAGPBEnumDescriptor * enumDescriptor; 
-(TAGPBEnumDescriptor *)enumDescriptor;
-(BOOL)isRepeated;
-(BOOL)isMessage;
-(BOOL)isPackable;
-(Class)msgClass;
-(id)initWithExtensionDescription:(TAGPBExtensionDescription*)arg1 ;
-(NSString *)singletonName;
-(const char*)singletonNameC;
-(unsigned)fieldNumber;
-(int)type;
@end

