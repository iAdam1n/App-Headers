/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Gumtree/Gumtree-Structs.h>
@class GSDK_PBFieldOptions, NSString, GSDK_PBEnumDescriptor;

@interface GSDK_PBFieldDescriptor : NSObject {

	PBMessageFieldDescription* description_;
	SEL getSel_;
	SEL setSel_;
	SEL hasSel_;
	SEL setHasSel_;
	SCD_Union_GS26 defaultValue_;
	GSDK_PBFieldOptions* fieldOptions_;
	Class msgClass_;
	SCD_Union_GS27* enumHandling_;

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
@property (nonatomic,readonly) GSDK_PBFieldOptions * fieldOptions; 
@property (nonatomic,readonly) SEL hasSel; 
@property (nonatomic,readonly) SEL setHasSel; 
@property (nonatomic,readonly) unsigned hasIndex; 
@property (nonatomic,readonly) Class msgClass; 
@property (nonatomic,retain,readonly) GSDK_PBEnumDescriptor * enumDescriptor; 
-(GSDK_PBEnumDescriptor *)enumDescriptor;
-(id)initWithFieldDescription:(PBMessageFieldDescription*)arg1 rootClass:(Class)arg2 ;
-(BOOL)isRepeated;
-(BOOL)isMessage;
-(unsigned)hasIndex;
-(BOOL)hasDefaultValue;
-(BOOL)isPackable;
-(BOOL)isValidEnumValue:(int)arg1 ;
-(id)textFormatName;
-(SEL)getSel;
-(GSDK_PBFieldOptions *)fieldOptions;
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
-(BOOL)isRequired;
-(unsigned)number;
@end
