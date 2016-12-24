/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/MQEventDispatcher.h>
#import <Facebook/HTModelDocumentUndoDelegate.h>

@protocol MQEventHandlerProtocol, MQFormatRelationsProtocol, MQFileControllerProtocol, MQDocumentModelProtocol;
@class MQEventHandler, MSQModelDocumentUndo, MSQModelDocumentContext, MSQScriptingController, NSUndoManager, NSString;

@interface MSQModelDocumentContainer : MQEventDispatcher <HTModelDocumentUndoDelegate> {

	id<MQEventHandlerProtocol> _textureListChangeHandler;
	id<MQEventHandlerProtocol> _materialListChangeHandler;
	id<MQEventHandlerProtocol> _sceneChangeHandler;
	MQEventHandler* _scriptChangeHandler;
	long long _transactionLevel;
	delegateOptionalProtocolResponseFlags _transactionFlags;
	BOOL _runningScript;
	id<MQFormatRelationsProtocol> _formatRelations;
	id<MQFormatRelationsProtocol> _runtimeFormatRelations;
	id<MQFileControllerProtocol> _fileController;
	MSQModelDocumentUndo* _undo;
	MSQModelDocumentContext* _context;
	id<MQDocumentModelProtocol> _editorModel;
	id<MQDocumentModelProtocol> _runtimeModel;
	MSQScriptingController* _scriptingController;
	long long _runMode;

}

@property (nonatomic,retain) id<MQDocumentModelProtocol> editorModel;                             //@synthesize editorModel=_editorModel - In the implementation block
@property (nonatomic,readonly) id<MQFormatRelationsProtocol> formatRelations;                     //@synthesize formatRelations=_formatRelations - In the implementation block
@property (nonatomic,readonly) id<MQFormatRelationsProtocol> runtimeFormatRelations;              //@synthesize runtimeFormatRelations=_runtimeFormatRelations - In the implementation block
@property (nonatomic,readonly) id<MQFileControllerProtocol> fileController;                       //@synthesize fileController=_fileController - In the implementation block
@property (nonatomic,readonly) MSQModelDocumentUndo * undo;                                       //@synthesize undo=_undo - In the implementation block
@property (nonatomic,readonly) MSQModelDocumentContext * context;                                 //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id<MQDocumentModelProtocol> runtimeModel;                            //@synthesize runtimeModel=_runtimeModel - In the implementation block
@property (nonatomic,readonly) MSQScriptingController * scriptingController;                      //@synthesize scriptingController=_scriptingController - In the implementation block
@property (assign,nonatomic) long long runMode;                                                   //@synthesize runMode=_runMode - In the implementation block
@property (nonatomic,readonly) BOOL runningScript;                                                //@synthesize runningScript=_runningScript - In the implementation block
@property (nonatomic,readonly) id<MQDocumentModelProtocol> activeModel; 
@property (nonatomic,readonly) NSUndoManager * userUndoManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MSQScriptingController *)scriptingController;
-(id<MQFormatRelationsProtocol>)runtimeFormatRelations;
-(id<MQFileControllerProtocol>)fileController;
-(void)_editorModelScriptDidChange:(id)arg1 ;
-(void)_sceneObjectRemovedEvent:(id)arg1 ;
-(void)_materialRemovedEvent:(id)arg1 ;
-(void)_textureRemovedEvent:(id)arg1 ;
-(void)setEditorModel:(id<MQDocumentModelProtocol>)arg1 ;
-(id)_editorManifestDataWithError:(id*)arg1 ;
-(id<MQDocumentModelProtocol>)editorModel;
-(void)performTransactionUsingBlock:(/*^block*/id)arg1 ;
-(void)_removeUnreferencedPrefabs;
-(void)_removeDanglingTextureReferences;
-(void)_removeDanglingMaterialReferences;
-(void)_dispatchRuntimeModelEventWithCompleted:(BOOL)arg1 ;
-(BOOL)runningScript;
-(void)_createScriptRuntimeModel;
-(void)_dispatchRuntimeModelEvents;
-(void)setRunningScript:(BOOL)arg1 ;
-(void)_disposeScriptRuntimeModel;
-(void)stopScript;
-(id)initWithFileController:(id)arg1 ;
-(void)createEditorModelWithType:(id)arg1 ;
-(BOOL)writeToURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(id)bundleData;
-(id<MQDocumentModelProtocol>)activeModel;
-(NSUndoManager *)userUndoManager;
-(void)_removeChildNodesWithIdentifiers:(id)arg1 ofNode:(id)arg2 excludeIdentifiers:(id)arg3 ;
-(id)findTextureWithHash:(id)arg1 ;
-(void)removeReferencesToMaterialWithIdentifier:(id)arg1 ;
-(void)replaceReferencesToMaterialWithIdentifier:(id)arg1 withIdentifier:(id)arg2 ;
-(void)copyStateFromMaterialWithIdentifier:(id)arg1 toIdentifier:(id)arg2 ;
-(void)cleanupTransaction;
-(id<MQFormatRelationsProtocol>)formatRelations;
-(id<MQDocumentModelProtocol>)runtimeModel;
-(void)setRuntimeModel:(id<MQDocumentModelProtocol>)arg1 ;
-(void)documentUndo:(id)arg1 willMakeChangesByUndoing:(BOOL)arg2 ;
-(void)documentUndo:(id)arg1 didMakeChangesByUndoing:(BOOL)arg2 ;
-(void)beginTransactionForChange:(BOOL)arg1 ;
-(void)dealloc;
-(MSQModelDocumentUndo *)undo;
-(MSQModelDocumentContext *)context;
-(void)runScript;
-(void)beginTransaction;
-(long long)runMode;
-(void)setRunMode:(long long)arg1 ;
-(BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(void)endTransaction;
@end
