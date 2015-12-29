//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGCollectionItem.h"

@class NSString, UIColor;

@interface TGUserInfoPhoneCollectionItem : TGCollectionItem
{
    NSString *_label;
    NSString *_formattedPhone;
    SEL _action;
    _Bool _lastInList;
    NSString *_phone;
    UIColor *_phoneColor;
}

@property(nonatomic) _Bool lastInList; // @synthesize lastInList=_lastInList;
@property(retain, nonatomic) UIColor *phoneColor; // @synthesize phoneColor=_phoneColor;
@property(retain, nonatomic) NSString *phone; // @synthesize phone=_phone;
- (void).cxx_destruct;
- (void)itemPerformAction:(SEL)arg1;
- (_Bool)itemCanPerformAction:(SEL)arg1;
- (_Bool)itemWantsMenu;
- (void)unbindView;
- (void)bindView:(id)arg1;
- (void)itemSelected:(id)arg1;
- (struct CGSize)itemSizeForContainerSize:(struct CGSize)arg1;
- (Class)itemViewClass;
- (id)initWithLabel:(id)arg1 phone:(id)arg2 phoneColor:(id)arg3 action:(SEL)arg4;

@end
