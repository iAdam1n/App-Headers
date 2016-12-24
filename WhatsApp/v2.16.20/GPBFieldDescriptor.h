/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:48 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WhatsApp/WhatsApp-Structs.h>
@class GPBOneofDescriptor, NSString, GPBEnumDescriptor;

@interface GPBFieldDescriptor : NSObject {

	GPBMessageFieldDescription* description_;
	GPBOneofDescriptor* containingOneof_;
	SEL getSel_;
	SEL setSel_;
	SEL hasOrCountSel_;
	SEL setHasSel_;
	SCD_Union_GP111 defaultValue_;
	Class msgClass_;
	SCD_Union_GP112* enumHandling_;

}

@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned number; 
@property (nonatomic,readonly) unsigned char dataType; 
@property (nonatomic,readonly) BOOL hasDefaultValue; 
@property (nonatomic,readonly) /*function pointer*/void* defaultValue; 
@property (getter=isRequired,nonatomic,readonly) BOOL required; 
@property (getter=isOptional,nonatomic,readonly) BOOL optional; 
@property (nonatomic,readonly) unsigned char fieldType; 
@property (nonatomic,readonly) unsigned char mapKeyDataType; 
@property (getter=isPackable,nonatomic,readonly) BOOL packable; 
@property (nonatomic,readonly) GPBOneofDescriptor * containingOneof; 
@property (nonatomic,readonly) Class msgClass; 
@property (nonatomic,readonly) GPBEnumDescriptor * enumDescriptor; 
-(id)initWithFieldDescription:(void*)arg1 includesDefault:(BOOL)arg2 syntax:(unsigned char)arg3 ;
-(BOOL)hasDefaultValue;
-(unsigned char)mapKeyDataType;
-(BOOL)isPackable;
-(BOOL)isValidEnumValue:(int)arg1 ;
-(GPBEnumDescriptor *)enumDescriptor;
-(id)textFormatName;
-(Class)msgClass;
-(GPBOneofDescriptor *)containingOneof;
-(BOOL)isOptional;
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(/*function pointer*/void*)defaultValue;
-(BOOL)isRequired;
-(unsigned char)fieldType;
-(unsigned char)dataType;
-(unsigned)number;
@end
