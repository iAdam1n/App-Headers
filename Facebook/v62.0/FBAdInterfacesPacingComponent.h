/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class CKComponent;

@interface FBAdInterfacesPacingComponent : CKCompositeComponent {

	BOOL _isEditingBid;
	SEL _pacingChangedAction;
	CKComponent* _textFieldComponent;
	unsigned long long _offsetAmount;

}

@property (nonatomic,readonly) SEL pacingChangedAction;                       //@synthesize pacingChangedAction=_pacingChangedAction - In the implementation block
@property (nonatomic,readonly) CKComponent * textFieldComponent;              //@synthesize textFieldComponent=_textFieldComponent - In the implementation block
@property (assign,nonatomic) BOOL isEditingBid;                               //@synthesize isEditingBid=_isEditingBid - In the implementation block
@property (assign,nonatomic) unsigned long long offsetAmount;                 //@synthesize offsetAmount=_offsetAmount - In the implementation block
+(id)newWithSelectedPacingType:(id)arg1 bidAmount:(long long)arg2 currencySymbol:(id)arg3 offsetAmount:(unsigned long long)arg4 pacingChangedAction:(SEL)arg5 toolbox:(id)arg6 ;
+(id)initialState;
-(unsigned long long)offsetAmount;
-(void)didTapEditBid;
-(SEL)pacingChangedAction;
-(CKComponent *)textFieldComponent;
-(BOOL)isEditingBid;
-(void)setIsEditingBid:(BOOL)arg1 ;
-(void)setOffsetAmount:(unsigned long long)arg1 ;
@end
