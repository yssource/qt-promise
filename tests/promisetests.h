/****************************************************************************
**
** Copyright (C) 2017 Benoit Walter
** Contact: benoit.walter@meerun.com
**
** Licensed to the Apache Software Foundation (ASF) under one
** or more contributor license agreements.  See the NOTICE file
** distributed with this work for additional information
** regarding copyright ownership.  The ASF licenses this file
** to you under the Apache License, Version 2.0 (the
** "License"); you may not use this file except in compliance
** with the License.  You may obtain a copy of the License at
** 
**   http://www.apache.org/licenses/LICENSE-2.0
** 
** Unless required by applicable law or agreed to in writing,
** software distributed under the License is distributed on an
** "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
** KIND, either express or implied.  See the License for the
** specific language governing permissions and limitations
** under the License.
****************************************************************************/

#pragma once

#include <QObject>

class PromiseTests : public QObject {
    Q_OBJECT

  public:
    explicit PromiseTests(QObject *parent = nullptr);

  signals:
    void testVoidSignal();
    void testIntSignal(int);
    void testStringSignal(const QString &);
    void testIntStringSignal(int, const QString &);

  private slots:
    void cleanup();

    void test_promiseConstructor();
    void test_successfullPromise();
    void test_failingPromise();
    void test_makePromiseAndResolve();
    void test_makePromiseAndReject();
    void test_multipleChain();
    void test_resolvedDefer();
    void test_rejectedDefer();
    void test_contextThread();
    void test_contextObject();
    void test_future();
    void test_canceledFuture();
    void test_embeddedPromise();
    void test_connection();
    void test_deferredConnect();
    void test_deferredConnectAndResolve();
    void test_deferredConnectAndReject();
};

