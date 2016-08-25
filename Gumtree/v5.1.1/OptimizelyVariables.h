/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet;

@interface OptimizelyVariables : NSObject {

	NSMutableDictionary* _activeVariables;
	NSMutableSet* _lockedVariableKeys;
	NSMutableDictionary* _registeredVariables;
	NSMutableDictionary* _editModeCallbacks;

}

@property (retain) NSMutableDictionary * activeVariables;                            //@synthesize activeVariables=_activeVariables - In the implementation block
@property (retain) NSMutableSet * lockedVariableKeys;                                //@synthesize lockedVariableKeys=_lockedVariableKeys - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * registeredVariables;              //@synthesize registeredVariables=_registeredVariables - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * editModeCallbacks;                //@synthesize editModeCallbacks=_editModeCallbacks - In the implementation block
-(void)sendToEditor;
-(BOOL)canActivateVariablesWithKeys:(id)arg1 ;
-(void)activateVariablesFromExperiment:(id)arg1 ;
-(id)objectOfType:(Class)arg1 forKey:(id)arg2 defaultValue:(id)arg3 ;
-(void)registerCallbackForVariableWithKey:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)registerVariableWithKey:(id)arg1 value:(id)arg2 type:(Class)arg3 ;
-(void)clearLocks;
-(void)setVariableHandler:(id)arg1 ;
-(NSMutableDictionary *)activeVariables;
-(NSMutableDictionary *)editModeCallbacks;
-(NSMutableSet *)lockedVariableKeys;
-(NSMutableDictionary *)registeredVariables;
-(void)lockVariableWithKey:(id)arg1 ;
-(void)removeVariableFromActiveVariables:(id)arg1 ;
-(void)sendAppHasNoRegisteredVariables;
-(void)setActiveVariables:(NSMutableDictionary *)arg1 ;
-(void)setLockedVariableKeys:(NSMutableSet *)arg1 ;
-(void)setRegisteredVariables:(NSMutableDictionary *)arg1 ;
-(void)setEditModeCallbacks:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)start;
@end

