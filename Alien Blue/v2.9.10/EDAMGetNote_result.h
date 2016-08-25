/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class EDAMNote, EDAMUserException, EDAMSystemException, EDAMNotFoundException;

@interface EDAMGetNote_result : NSObject <NSCoding> {

	EDAMNote* __success;
	EDAMUserException* __userException;
	EDAMSystemException* __systemException;
	EDAMNotFoundException* __notFoundException;
	BOOL __success_isset;
	BOOL __userException_isset;
	BOOL __systemException_isset;
	BOOL __notFoundException_isset;

}

@property (setter=setSuccess:,getter=success,nonatomic,retain) EDAMNote * success; 
@property (setter=setUserException:,getter=userException,nonatomic,retain) EDAMUserException * userException; 
@property (setter=setSystemException:,getter=systemException,nonatomic,retain) EDAMSystemException * systemException; 
@property (setter=setNotFoundException:,getter=notFoundException,nonatomic,retain) EDAMNotFoundException * notFoundException; 
-(void)read:(id)arg1 ;
-(void)setUserException:(EDAMUserException *)arg1 ;
-(void)setSystemException:(EDAMSystemException *)arg1 ;
-(BOOL)successIsSet;
-(void)unsetSuccess;
-(EDAMUserException *)userException;
-(BOOL)userExceptionIsSet;
-(void)unsetUserException;
-(EDAMSystemException *)systemException;
-(BOOL)systemExceptionIsSet;
-(void)unsetSystemException;
-(void)setNotFoundException:(EDAMNotFoundException *)arg1 ;
-(id)initWithSuccess:(id)arg1 userException:(id)arg2 systemException:(id)arg3 notFoundException:(id)arg4 ;
-(EDAMNotFoundException *)notFoundException;
-(BOOL)notFoundExceptionIsSet;
-(void)unsetNotFoundException;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(EDAMNote *)success;
-(void)setSuccess:(EDAMNote *)arg1 ;
-(void)write:(id)arg1 ;
@end

