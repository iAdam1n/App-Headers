/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:05 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/NTNativeTemplateComponent.h>
#import <Facebook/NTHasComponentAttributes.h>
#import <Facebook/NTHasViewAttributes.h>

@protocol NTAction;
@class NSDictionary, FBHScrollComponent, FBNativeTemplateContext, NSArray, NSString;

@interface FBNativeTemplateHScrollComponent : NTNativeTemplateComponent <NTHasComponentAttributes, NTHasViewAttributes> {

	NSDictionary* _genericHelpers;
	id<NTAction> _nearingStartAction;
	id<NTAction> _nearingEndAction;
	long long _targetChildIndex;
	FBHScrollComponent* _hScrollComponent;
	FBNativeTemplateContext* _context;
	NSDictionary* _model;
	NSArray* _childModels;

}

@property (nonatomic,readonly) long long targetChildIndex;                         //@synthesize targetChildIndex=_targetChildIndex - In the implementation block
@property (nonatomic,readonly) FBHScrollComponent * hScrollComponent;              //@synthesize hScrollComponent=_hScrollComponent - In the implementation block
@property (nonatomic,readonly) FBNativeTemplateContext * context;                  //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * model;                          //@synthesize model=_model - In the implementation block
@property (nonatomic,copy,readonly) NSArray * childModels;                         //@synthesize childModels=_childModels - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithModel:(id)arg1 context:(id)arg2 ;
+(id)childModelNames;
-(void)nearingEnd;
-(FBHScrollComponent *)hScrollComponent;
-(void)didTapView;
-(id)ntHScrollController;
-(void)didLongPressView:(id)arg1 gestureRecognizer:(id)arg2 ;
-(void)nearingStart;
-(void)scrollInDirection:(unsigned long long)arg1 ;
-(void)scrollRight;
-(long long)targetChildIndex;
-(NSArray *)childModels;
-(FBNativeTemplateContext *)context;
-(NSDictionary *)model;
-(void)scrollLeft;
@end
