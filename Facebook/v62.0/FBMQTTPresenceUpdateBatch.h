/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:50 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray, NSString;

@interface FBMQTTPresenceUpdateBatch : NSObject <TBase, NSCoding> {

	BOOL __thrift_isIncrementalUpdate;
	NSMutableArray* __thrift_updates;
	BOOL __thrift_isIncrementalUpdate_set;
	BOOL __thrift_updates_set;

}

@property (assign,nonatomic) BOOL isIncrementalUpdate; 
@property (nonatomic,retain) NSMutableArray * updates; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(BOOL)isIncrementalUpdate;
-(void)setIsIncrementalUpdate:(BOOL)arg1 ;
-(id)initWithIsIncrementalUpdate:(BOOL)arg1 updates:(id)arg2 ;
-(BOOL)isIncrementalUpdateIsSet;
-(void)unsetIsIncrementalUpdate;
-(BOOL)updatesIsSet;
-(void)unsetUpdates;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSMutableArray *)updates;
-(void)setUpdates:(NSMutableArray *)arg1 ;
-(void)write:(id)arg1 ;
@end
