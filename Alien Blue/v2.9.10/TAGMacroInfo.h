/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary, TAGExpandedFunctionCall;

@interface TAGMacroInfo : NSObject {

	NSMutableSet* _rules;
	NSMutableDictionary* _addMacros;
	NSMutableDictionary* _removeMacros;
	TAGExpandedFunctionCall* _defaultFunctionCall;

}

@property (nonatomic,retain) NSMutableSet * rules;                                       //@synthesize rules=_rules - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * addMacros;                            //@synthesize addMacros=_addMacros - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * removeMacros;                         //@synthesize removeMacros=_removeMacros - In the implementation block
@property (nonatomic,retain) TAGExpandedFunctionCall * defaultFunctionCall;              //@synthesize defaultFunctionCall=_defaultFunctionCall - In the implementation block
-(NSMutableDictionary *)addMacros;
-(NSMutableDictionary *)removeMacros;
-(void)setAddMacros:(NSMutableDictionary *)arg1 ;
-(void)setRemoveMacros:(NSMutableDictionary *)arg1 ;
-(void)addAddMacro:(id)arg1 forRule:(id)arg2 ;
-(void)addRemoveMacro:(id)arg1 forRule:(id)arg2 ;
-(TAGExpandedFunctionCall *)defaultFunctionCall;
-(void)setDefaultFunctionCall:(TAGExpandedFunctionCall *)arg1 ;
-(void)setRules:(NSMutableSet *)arg1 ;
-(id)init;
-(NSMutableSet *)rules;
@end

