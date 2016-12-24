/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNCollectionViewElementAppearanceTransitioning.h>

@protocol NSObjectNSCopying;
@class NSString;

@interface MNCollectionViewElementSimpleAppearanceTransitioning : NSObject <MNCollectionViewElementAppearanceTransitioning> {

	id<NSObject><NSCopying> _object;

}

@property (nonatomic,copy) id<NSObject><NSCopying> object;              //@synthesize object=_object - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)appearanceTransitioningWithObject:(id)arg1 ;
-(BOOL)canAppearFrom:(id)arg1 ;
-(BOOL)canDisappearTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id<NSObject><NSCopying>)object;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setObject:(id<NSObject><NSCopying>)arg1 ;
-(id)initWithObject:(id)arg1 ;
@end
