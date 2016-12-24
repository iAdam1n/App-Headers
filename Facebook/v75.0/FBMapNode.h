/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/ASDisplayNode.h>
#import <Facebook/FBInteractiveMapNodeDelegate.h>

@protocol FBMapNodeDelegate;
@class FBRichStoryBlockDisplayContext, NSArray, FBInteractiveMapNode, FBMapSnapshotNode, NSString;

@interface FBMapNode : ASDisplayNode <FBInteractiveMapNodeDelegate> {

	FBRichStoryBlockDisplayContext* _displayContext;
	unsigned long long _mapType;
	NSArray* _pointAnnotations;
	SCD_Struct_FB48 _region;
	FBInteractiveMapNode* _interactiveMapNode;
	mutex _lock;
	FBMapSnapshotNode* _snapshotMapNode;
	BOOL _interactiveMapFinishedRendering;
	BOOL _pointAnnotationsVisible;
	id<FBMapNodeDelegate> _delegate;
	unsigned long long _displayMode;
	double _pointAnnotationScale;

}

@property (assign,nonatomic) double pointAnnotationScale;                        //@synthesize pointAnnotationScale=_pointAnnotationScale - In the implementation block
@property (assign,nonatomic,__weak) id<FBMapNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long displayMode;                     //@synthesize displayMode=_displayMode - In the implementation block
@property (assign,nonatomic) BOOL pointAnnotationsVisible;                       //@synthesize pointAnnotationsVisible=_pointAnnotationsVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_staticInitialize;
-(void)didLoad;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(void)_didTapMap:(id)arg1 ;
-(id)initWithMapType:(unsigned long long)arg1 region:(SCD_Struct_FB47)arg2 pointAnnotations:(id)arg3 session:(id)arg4 displayContext:(id)arg5 ;
-(void)interactiveMapNodeDidFinishRenderingMap:(id)arg1 fullyRendered:(BOOL)arg2 ;
-(void)setPointAnnotationScale:(double)arg1 ;
-(double)pointAnnotationScale;
-(void)_destroyInteractiveMap;
-(void)_lazilyLoadInteractiveMapIfAppropriate;
-(void)_activateInteractiveMapIfAppropriate;
-(void)setPointAnnotationsVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPointAnnotationsVisible:(BOOL)arg1 ;
-(BOOL)pointAnnotationsVisible;
-(void)setDelegate:(id<FBMapNodeDelegate>)arg1 ;
-(id<FBMapNodeDelegate>)delegate;
-(void)layout;
-(unsigned long long)displayMode;
-(void)setDisplayMode:(unsigned long long)arg1 ;
@end
