/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface MNBusinessStackedContainerViewModel : FBValueObject <NSCopying> {

	unsigned long long _direction;
	unsigned long long _justify;
	NSArray* _elements;

}

@property (nonatomic,readonly) unsigned long long direction;              //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) unsigned long long justify;                //@synthesize justify=_justify - In the implementation block
@property (nonatomic,copy,readonly) NSArray * elements;                   //@synthesize elements=_elements - In the implementation block
+(id)listViewModelWithHeaders:(id)arg1 rows:(id)arg2 headerColor:(id)arg3 headerFont:(id)arg4 rowColors:(id)arg5 rowFonts:(id)arg6 relativeSpacings:(id)arg7 rowSpacing:(long long)arg8 cellSpacing:(long long)arg9 alignment:(unsigned long long)arg10 ;
+(id)listViewModelWithHeaders:(id)arg1 rows:(id)arg2 headerColor:(id)arg3 headerFont:(id)arg4 rowColor:(id)arg5 rowFont:(id)arg6 rowSpacing:(long long)arg7 cellSpacing:(long long)arg8 alignment:(unsigned long long)arg9 ;
+(id)flowLayoutWithHeaders:(id)arg1 labels:(id)arg2 headerColor:(id)arg3 headerFont:(id)arg4 labelColors:(id)arg5 labelFonts:(id)arg6 minimumHorizontalSpacing:(double)arg7 minimumVerticalSpacing:(double)arg8 ;
-(id)initWithDirection:(unsigned long long)arg1 justify:(unsigned long long)arg2 elements:(id)arg3 ;
-(unsigned long long)justify;
-(NSArray *)elements;
-(unsigned long long)direction;
@end
