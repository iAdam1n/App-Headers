/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:04 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <ECBCricketApp/ECBCricketApp-Structs.h>
@class GCKPB_PBFieldOptions, NSString, GCKPB_PBEnumDescriptor;

@interface GCKPB_PBFieldDescriptor : NSObject {

	GCKPB_PBMessageFieldDescription* description_;
	SEL getSel_;
	SEL setSel_;
	SEL hasSel_;
	SEL setHasSel_;
	SCD_Union_GC19 defaultValue_;
	GCKPB_PBFieldOptions* fieldOptions_;
	Class msgClass_;
	SCD_Union_GC20* enumHandling_;

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
@property (nonatomic,readonly) GCKPB_PBFieldOptions * fieldOptions; 
@property (nonatomic,readonly) SEL hasSel; 
@property (nonatomic,readonly) SEL setHasSel; 
@property (nonatomic,readonly) unsigned hasIndex; 
@property (nonatomic,readonly) Class msgClass; 
@property (nonatomic,retain,readonly) GCKPB_PBEnumDescriptor * enumDescriptor; 
-(GCKPB_PBEnumDescriptor *)enumDescriptor;
-(id)initWithFieldDescription:(GCKPB_PBMessageFieldDescription*)arg1 rootClass:(Class)arg2 ;
-(BOOL)isRepeated;
-(BOOL)isMessage;
-(unsigned)hasIndex;
-(BOOL)hasDefaultValue;
-(BOOL)isPackable;
-(BOOL)isValidEnumValue:(int)arg1 ;
-(id)textFormatName;
-(SEL)getSel;
-(GCKPB_PBFieldOptions *)fieldOptions;
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

