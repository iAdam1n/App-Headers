/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:57 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Gumtree/Gumtree-Structs.h>
@class TAGPBFieldOptions, NSString, TAGPBEnumDescriptor;

@interface TAGPBFieldDescriptor : NSObject {

	TAGPBMessageFieldDescription* description_;
	SEL getSel_;
	SEL setSel_;
	SEL hasSel_;
	SEL setHasSel_;
	SCD_Union_TA24 defaultValue_;
	TAGPBFieldOptions* fieldOptions_;
	Class msgClass_;
	SCD_Union_TA25* enumHandling_;

}

@property (nonatomic,retain,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned number; 
@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) BOOL hasDefaultValue; 
@property (nonatomic,readonly) /*function pointer*/void* defaultValue; 
@property (getter=isRequired,nonatomic,readonly) BOOL required; 
@property (getter=isOptional,nonatomic,readonly) BOOL optional; 
@property (getter=isRepeated,nonatomic,readonly) BOOL repeated; 
@property (getter=isPackable,nonatomic,readonly) BOOL packable; 
@property (getter=isMessage,nonatomic,readonly) BOOL message; 
@property (nonatomic,readonly) SEL getSel; 
@property (nonatomic,readonly) unsigned long long offset; 
@property (nonatomic,readonly) unsigned tag; 
@property (nonatomic,readonly) SEL setSel; 
@property (nonatomic,readonly) TAGPBFieldOptions * fieldOptions; 
@property (nonatomic,readonly) SEL hasSel; 
@property (nonatomic,readonly) SEL setHasSel; 
@property (nonatomic,readonly) unsigned hasIndex; 
@property (nonatomic,readonly) Class msgClass; 
@property (nonatomic,retain,readonly) TAGPBEnumDescriptor * enumDescriptor; 
-(TAGPBEnumDescriptor *)enumDescriptor;
-(id)initWithFieldDescription:(TAGPBMessageFieldDescription*)arg1 rootClass:(Class)arg2 ;
-(BOOL)isRepeated;
-(BOOL)isMessage;
-(unsigned)hasIndex;
-(BOOL)hasDefaultValue;
-(BOOL)isPackable;
-(BOOL)isValidEnumValue:(int)arg1 ;
-(id)textFormatName;
-(SEL)getSel;
-(TAGPBFieldOptions *)fieldOptions;
-(SEL)hasSel;
-(SEL)setHasSel;
-(SEL)setSel;
-(Class)msgClass;
-(BOOL)isOptional;
-(void)dealloc;
-(id)init;
-(NSString *)name;
-(int)type;
-(unsigned)tag;
-(unsigned long long)offset;
-(/*function pointer*/void*)defaultValue;
-(unsigned)number;
-(BOOL)isRequired;
@end

