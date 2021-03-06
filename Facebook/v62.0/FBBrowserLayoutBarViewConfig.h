/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface FBBrowserLayoutBarViewConfig : FBValueObject <NSCopying> {

	BOOL _translucent;
	UIColor* _barTint;
	UIColor* _tint;
	UIColor* _deselectedTint;
	UIColor* _selectedTint;

}

@property (nonatomic,copy,readonly) UIColor * barTint;                     //@synthesize barTint=_barTint - In the implementation block
@property (nonatomic,readonly) BOOL translucent;                           //@synthesize translucent=_translucent - In the implementation block
@property (nonatomic,copy,readonly) UIColor * tint;                        //@synthesize tint=_tint - In the implementation block
@property (nonatomic,copy,readonly) UIColor * deselectedTint;              //@synthesize deselectedTint=_deselectedTint - In the implementation block
@property (nonatomic,copy,readonly) UIColor * selectedTint;                //@synthesize selectedTint=_selectedTint - In the implementation block
-(UIColor *)barTint;
-(UIColor *)selectedTint;
-(UIColor *)deselectedTint;
-(id)initWithBarTint:(id)arg1 translucent:(BOOL)arg2 tint:(id)arg3 deselectedTint:(id)arg4 selectedTint:(id)arg5 ;
-(BOOL)translucent;
-(UIColor *)tint;
@end

