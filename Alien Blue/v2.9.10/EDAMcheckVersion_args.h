/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface EDAMcheckVersion_args : NSObject <NSCoding> {

	NSString* __clientName;
	short __edamVersionMajor;
	short __edamVersionMinor;
	BOOL __clientName_isset;
	BOOL __edamVersionMajor_isset;
	BOOL __edamVersionMinor_isset;

}

@property (setter=setClientName:,getter=clientName,nonatomic,retain) NSString * clientName; 
@property (assign,setter=setEdamVersionMajor:,getter=edamVersionMajor,nonatomic) short edamVersionMajor; 
@property (assign,setter=setEdamVersionMinor:,getter=edamVersionMinor,nonatomic) short edamVersionMinor; 
-(void)read:(id)arg1 ;
-(void)setEdamVersionMajor:(short)arg1 ;
-(void)setEdamVersionMinor:(short)arg1 ;
-(id)initWithClientName:(id)arg1 edamVersionMajor:(short)arg2 edamVersionMinor:(short)arg3 ;
-(BOOL)clientNameIsSet;
-(void)unsetClientName;
-(short)edamVersionMajor;
-(BOOL)edamVersionMajorIsSet;
-(void)unsetEdamVersionMajor;
-(short)edamVersionMinor;
-(BOOL)edamVersionMinorIsSet;
-(void)unsetEdamVersionMinor;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)write:(id)arg1 ;
-(NSString *)clientName;
-(void)setClientName:(NSString *)arg1 ;
@end

