//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPMojiStatusBaseView.h"

@class MKCircularProgressView;

@interface SKPMojiStatusViewDownloading : SKPMojiStatusBaseView
{
    MKCircularProgressView *_progressView;
}

@property(retain, nonatomic) MKCircularProgressView *progressView; // @synthesize progressView=_progressView;
- (void).cxx_destruct;
- (void)configureStatusElementWithSize:(struct CGSize)arg1;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
