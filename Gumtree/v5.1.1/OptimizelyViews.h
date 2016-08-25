/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet;

@interface OptimizelyViews : NSObject {

	NSMutableDictionary* _activeViewChanges;
	NSMutableDictionary* _registeredViews;
	NSMutableSet* _lockedViewKeyPaths;

}

@property (nonatomic,retain) NSMutableDictionary * activeViewChanges;              //@synthesize activeViewChanges=_activeViewChanges - In the implementation block
@property (retain) NSMutableDictionary * registeredViews;                          //@synthesize registeredViews=_registeredViews - In the implementation block
@property (nonatomic,retain) NSMutableSet * lockedViewKeyPaths;                    //@synthesize lockedViewKeyPaths=_lockedViewKeyPaths - In the implementation block
-(void)sendToEditor;
-(void)registerView:(id)arg1 ;
-(void)resetOptimizelyChangesToView:(id)arg1 ;
-(void)applyOptimizelyChangesToView:(id)arg1 ;
-(void)unregisterView:(id)arg1 ;
-(id)registeredViewsWithId:(id)arg1 ;
-(void)sendViewToEditor:(id)arg1 ;
-(void)removeViewFromEditor:(id)arg1 ;
-(void)registerExisitingViews;
-(void)clearLocks;
-(void)resetChangesToRegisteredViews;
-(void)setViewPropertyHandler:(id)arg1 ;
-(void)applyOptimizelyChangesToViewAndSubviews:(id)arg1 ;
-(void)setupEditorHandlers;
-(void)getViewHandler:(id)arg1 ;
-(void)sendViewToEditor:(id)arg1 shouldForceRefresh:(BOOL)arg2 shouldUpdateView:(BOOL)arg3 ;
-(NSMutableDictionary *)activeViewChanges;
-(NSMutableDictionary *)registeredViews;
-(BOOL)canActivateViewChanges:(id)arg1 ;
-(NSMutableSet *)lockedViewKeyPaths;
-(void)updateFramesForCurrentOrientation;
-(void)addObject:(id)arg1 toOneToManyDictionary:(id)arg2 forKeyPath:(id)arg3 ;
-(void)removeObject:(id)arg1 fromOneToManyDictionary:(id)arg2 forKeyPath:(id)arg3 ;
-(void)registerViewAndSubViews:(id)arg1 ;
-(void)sendAllViewsToEditor;
-(void)sendFontsToEditor;
-(void)sendViewToEditor:(id)arg1 shouldForceRefresh:(BOOL)arg2 ;
-(void)markActiveViewChangesForReset;
-(BOOL)areViewsRegistered:(id)arg1 ;
-(BOOL)canActivateViewChangesFromExperiment:(id)arg1 ;
-(void)activateViewChangesFromExperiment:(id)arg1 ;
-(id)imageNameForViewId:(id)arg1 ;
-(void)sendWillSendViewBatchToEditor;
-(void)applyChangesToRegisteredViews;
-(void)setActiveViewChanges:(NSMutableDictionary *)arg1 ;
-(void)setRegisteredViews:(NSMutableDictionary *)arg1 ;
-(void)setLockedViewKeyPaths:(NSMutableSet *)arg1 ;
-(id)init;
-(void)start;
@end

