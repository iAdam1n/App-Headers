/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:31 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MQDataModel.h>
#import <Messenger/MQMaterialModelBaseProtocol.h>

@class NSString, MSQModelUndoablePrimitive, MSQModelDocumentContext, NSArray;

@interface MQMaterialModelBase : MQDataModel <MQMaterialModelBaseProtocol> {

	MSQModelUndoablePrimitive* _diffuseTextureIdentifierProperty;
	MSQModelUndoablePrimitive* _transparencyProperty;
	MSQModelUndoablePrimitive* _readsFromDepthBufferProperty;
	MSQModelUndoablePrimitive* _writesToDepthBufferProperty;
	MSQModelUndoablePrimitive* _doubleSidedProperty;
	MSQModelUndoablePrimitive* _cullModeProperty;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long undoableState; 
@property (nonatomic,readonly) MSQModelDocumentContext * context; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) long long numChildren; 
@property (nonatomic,copy,readonly) NSArray * children; 
@property (assign,nonatomic,__weak) id<MQDataModelProtocol> parent; 
@property (nonatomic,retain) id<MQFileControllerProtocol> fileController; 
@property (assign,nonatomic) BOOL selected; 
@property (nonatomic,readonly) id<MQDocumentModelProtocol> documentModel; 
@property (assign,nonatomic) double transparency; 
@property (assign,nonatomic) BOOL readsFromDepthBuffer; 
@property (assign,nonatomic) BOOL writesToDepthBuffer; 
@property (assign,nonatomic) BOOL doubleSided; 
@property (assign,nonatomic) int cullMode; 
@property (nonatomic,retain) id<MSQTextureModelProtocol> diffuseTexture; 
@property (nonatomic,copy) NSString * diffuseTextureIdentifier; 
-(void)addAttributes:(id)arg1 options:(id)arg2 ;
-(void)parseAttributes:(id)arg1 options:(id)arg2 ;
-(void)sendChangeEvent;
-(void)addObjectReferencesToSet:(id)arg1 ;
-(void)setDiffuseTextureIdentifier:(NSString *)arg1 ;
-(id<MSQTextureModelProtocol>)diffuseTexture;
-(void)setDiffuseTexture:(id<MSQTextureModelProtocol>)arg1 ;
-(void)copyStateFromMaterial:(id)arg1 ;
-(void)addTextureIdentifiersToMap:(id)arg1 ;
-(id)textureIdentifierForPropertyName:(id)arg1 ;
-(BOOL)setTextureIdentifier:(id)arg1 forPropertyName:(id)arg2 ;
-(BOOL)isReferringToTextureWithIdentifier:(id)arg1 ;
-(NSString *)diffuseTextureIdentifier;
-(BOOL)doubleSided;
-(id)initWithContext:(id)arg1 ;
-(void)setDoubleSided:(BOOL)arg1 ;
-(void)setCullMode:(int)arg1 ;
-(double)transparency;
-(void)setTransparency:(double)arg1 ;
-(int)cullMode;
-(BOOL)writesToDepthBuffer;
-(void)setWritesToDepthBuffer:(BOOL)arg1 ;
-(BOOL)readsFromDepthBuffer;
-(void)setReadsFromDepthBuffer:(BOOL)arg1 ;
@end
