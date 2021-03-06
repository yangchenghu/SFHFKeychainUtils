//
//  SFHFKeychainUtils.h
//
//  Created by Buzz Andersen on 10/20/08.
//  Based partly on code by Jonathan Wight, Jon Crosby, and Mike Malone.
//  Copyright 2008 Sci-Fi Hi-Fi. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person
//  obtaining a copy of this software and associated documentation
//  files (the "Software"), to deal in the Software without
//  restriction, including without limitation the rights to use,
//  copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the
//  Software is furnished to do so, subject to the following
//  conditions:
//
//  The above copyright notice and this permission notice shall be
//  included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
//  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
//  OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
//  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
//  HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
//  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
//  OTHER DEALINGS IN THE SOFTWARE.
//
// Updated with ARC support.  Originally forked from:
// https://github.com/beelsebob/F1Pad/commit/66ea68e08eef0a66c706c45583e071f0a032f3c8

#import <Foundation/Foundation.h>

@interface SFHFKeychainUtils : NSObject

/**
 * @description 获取一个Item
 * @param
 * @return
 */
+ (NSString *) getPasswordForUsername: (NSString *) username
                       andServiceName: (NSString *) serviceName
                          accessGroup: (NSString *) accessGroup
                                error: (NSError **) error;

/**
 * @description 保存一个Item
 * @param
 * @return
 */
+ (BOOL) storeUsername: (NSString *) username
           andPassword: (NSString *) password
        forServiceName: (NSString *) serviceName
        updateExisting: (BOOL) updateExisting
           accessGroup: (NSString *) accessGroup
                 error: (NSError **) error;

/**
 * @description 根据service和Username来清除Item
 * @param
 * @return
 */
+ (BOOL) deleteItemForUsername: (NSString *) username
                andServiceName: (NSString *) serviceName
                   accessGroup: (NSString *) accessGroup
                         error: (NSError **) error;

/**
 * @description 清除所有相同Servicename的Items
 * @param
 * @return
 */
+ (BOOL) clearItemsForServiceName: (NSString *) serviceName
                      accessGroup: (NSString *) accessGroup
                            error: (NSError **) error;

/**
 * @description 获取所有的ServerName
 * @param
 * @return
 */
+ (NSArray *) getAllServerNameserror:(NSError **)error;

/**
 * @description 根据ServiceName获取UserName
 * @param
 * @return
 */
+ (NSArray *) getAllUserNamesFromServiceName:(NSString *)serviceName error:(NSError **)error;

/**
 * @description 获取bundleSeedID
 * @param
 * @return
 */
+ (NSString *) bundleSeedID;

@end