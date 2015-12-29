//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MKTraitCollection : NSObject
{
    long long mk_idiom;
    long long mk_horizontalClass;
    long long mk_verticalClass;
    long long mk_forceTouchCapability;
    double mk_scale;
}

+ (id)traitCollectionWithForceTouchCapability:(long long)arg1;
+ (id)traitCollectionWithVerticalSizeClass:(long long)arg1;
+ (id)traitCollectionWithHorizontalSizeClass:(long long)arg1;
+ (id)traitCollectionWithDisplayScale:(double)arg1;
+ (id)traitCollectionWithUserInterfaceIdiom:(long long)arg1;
+ (id)traitCollectionWithTraitsFromCollections:(id)arg1;
@property(readonly, nonatomic) long long forceTouchCapability;
@property(readonly, nonatomic) long long verticalSizeClass;
@property(readonly, nonatomic) long long horizontalSizeClass;
@property(readonly, nonatomic) double displayScale;
@property(readonly, nonatomic) long long userInterfaceIdiom;
- (_Bool)containsTraitsInCollection:(id)arg1;
- (id)init;

@end
