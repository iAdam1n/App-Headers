/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableDictionary, ECClassPropertyInfo;

@interface ECClassPropertyTestHelper : NSObject {

	NSArray* _ignoredProperties;
	NSMutableDictionary* _elementClassNames;
	NSMutableDictionary* _factories;
	ECClassPropertyInfo* _info;

}

@property (nonatomic,retain) NSMutableDictionary * elementClassNames;              //@synthesize elementClassNames=_elementClassNames - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * factories;                      //@synthesize factories=_factories - In the implementation block
@property (nonatomic,retain) ECClassPropertyInfo * info;                           //@synthesize info=_info - In the implementation block
@property (nonatomic,retain) NSArray * ignoredProperties;                          //@synthesize ignoredProperties=_ignoredProperties - In the implementation block
+(void)load;
-(NSMutableDictionary *)factories;
-(id)createRandomString;
-(NSMutableDictionary *)elementClassNames;
-(id)createInstance;
-(void)setRandomProperties:(id)arg1 ;
-(void)setRandomProperty:(id)arg1 onObjects:(id)arg2 ;
-(void)setRandomProperty:(id)arg1 onObjects:(id)arg2 verifyDifferentFrom:(id)arg3 ;
-(NSArray *)ignoredProperties;
-(double)createRandomDouble;
-(id)createObjectForProperty:(id)arg1 verifyDifferentFrom:(id)arg2 ;
-(id)createRandomInstance;
-(id)verifyObject:(id)arg1 isEqualTo:(id)arg2 ;
-(void)addFactoryForClassNamed:(id)arg1 factory:(/*^block*/id)arg2 ;
-(void)setElementClassName:(id)arg1 forKey:(id)arg2 ;
-(void)verifyCopy;
-(void)verifyHash;
-(void)verifyIsEqual;
-(void)setIgnoredProperties:(NSArray *)arg1 ;
-(void)setElementClassNames:(NSMutableDictionary *)arg1 ;
-(void)setFactories:(NSMutableDictionary *)arg1 ;
-(ECClassPropertyInfo *)info;
-(void)setInfo:(ECClassPropertyInfo *)arg1 ;
-(id)initWithClass:(Class)arg1 ;
@end
