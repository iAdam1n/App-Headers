/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@class FBFacepileItem;

@interface _FBFacepileViewButton : UIButton {

	FBFacepileItem* _item;
	unsigned long long _index;

}

@property (nonatomic,copy) FBFacepileItem * item;                   //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) unsigned long long index;              //@synthesize index=_index - In the implementation block
+(id)buttonWithType:(long long)arg1 ;
-(FBFacepileItem *)item;
-(unsigned long long)index;
-(void)setItem:(FBFacepileItem *)arg1 ;
-(void)setIndex:(unsigned long long)arg1 ;
@end
