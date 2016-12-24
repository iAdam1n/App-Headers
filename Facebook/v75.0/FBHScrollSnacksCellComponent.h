/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:03 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBHScrollImpressionLogging.h>

@class FBDirectInboxBucket, CKComponent;

@interface FBHScrollSnacksCellComponent : CKCompositeComponent <FBHScrollImpressionLogging> {

	FBDirectInboxBucket* _bucket;
	CKComponent* _imageComponent;
	CKTypedComponentAction<> _tapAction;
	CKTypedComponentAction<> _longPressAction;

}

@property (assign,nonatomic) CKTypedComponentAction<> tapAction;                    //@synthesize tapAction=_tapAction - In the implementation block
@property (assign,nonatomic) CKTypedComponentAction<> longPressAction;              //@synthesize longPressAction=_longPressAction - In the implementation block
@property (nonatomic,readonly) FBDirectInboxBucket * bucket;                        //@synthesize bucket=_bucket - In the implementation block
@property (nonatomic,readonly) CKComponent * imageComponent;                        //@synthesize imageComponent=_imageComponent - In the implementation block
+(id)newWithBucket:(id)arg1 options:(FBHScrollSnacksCellOptions)arg2 toolbox:(id)arg3 ;
-(CKComponent *)imageComponent;
-(CKTypedComponentAction<>)longPressAction;
-(void)setLongPressAction:(CKTypedComponentAction<>)arg1 ;
-(void)setTapAction:(CKTypedComponentAction<>)arg1 ;
-(CKTypedComponentAction<>)tapAction;
-(FBDirectInboxBucket *)bucket;
@end
