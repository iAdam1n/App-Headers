/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSHashTable;

@interface BaseModel : NSObject <NSSecureCoding> {

	BOOL _isObservingChanges;
	NSString* _pk;
	NSHashTable* _currentObservers;

}

@property (nonatomic,retain) NSHashTable * currentObservers;              //@synthesize currentObservers=_currentObservers - In the implementation block
@property (assign,nonatomic) BOOL isObservingChanges;                     //@synthesize isObservingChanges=_isObservingChanges - In the implementation block
@property (nonatomic,copy) NSString * pk;                                 //@synthesize pk=_pk - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)pk;
-(void)registerObserverForUpdates:(id)arg1 ;
-(void)setPk:(NSString *)arg1 ;
-(void)removeObserverForUpdates:(id)arg1 ;
-(id)selectorsToObserveChanges;
-(void)setIsObservingChanges:(BOOL)arg1 ;
-(void)notifyObserversForUpdatedModel;
-(NSHashTable *)currentObservers;
-(void)setCurrentObservers:(NSHashTable *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(BOOL)isObservingChanges;
-(void)startObservingChanges;
-(void)stopObservingChanges;
@end
