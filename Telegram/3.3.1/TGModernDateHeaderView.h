//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TGModernView.h"

@class NSString, UIImageView, UILabel;

@interface TGModernDateHeaderView : UIView <TGModernView>
{
    UILabel *_dateLabel;
    UIImageView *_backgroundImageView;
    int _date;
    struct CGSize _textSize;
    NSString *_viewIdentifier;
    NSString *_viewStateIdentifier;
}

+ (void)drawDate:(int)arg1 forContainerWidth:(double)arg2 inContext:(struct CGContext *)arg3 andBindBackgroundToContainer:(id)arg4 atPosition:(struct CGPoint)arg5;
@property(retain, nonatomic) NSString *viewStateIdentifier; // @synthesize viewStateIdentifier=_viewStateIdentifier;
@property(retain, nonatomic) NSString *viewIdentifier; // @synthesize viewIdentifier=_viewIdentifier;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateAssets;
- (int)date;
- (void)setDate:(int)arg1;
- (void)willBecomeRecycled;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
