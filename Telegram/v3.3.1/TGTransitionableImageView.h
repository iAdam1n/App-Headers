//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@interface TGTransitionableImageView : UIImageView
{
    UIImageView *_primaryImageView;
    UIImageView *_secondaryImageView;
}

@property(retain, nonatomic) UIImageView *secondaryImageView; // @synthesize secondaryImageView=_secondaryImageView;
@property(retain, nonatomic) UIImageView *primaryImageView; // @synthesize primaryImageView=_primaryImageView;
- (void).cxx_destruct;
- (void)transitionToImage:(id)arg1 duration:(double)arg2;
- (void)setImage:(id)arg1;
- (void)commonInit:(id)arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
